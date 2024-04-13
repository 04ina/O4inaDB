#define NUM_ATT_CATALOG_ATTRIBUTES  5 

/*
 *At the moment, the system directory table with attributes
 *does not support an unambiguous identifier in the form of an ID
 */ 
typedef enum AttributesCatAtts {
    /* Unambiguous identification */
    ACR_ATT_REL_NAME,
    ACR_ATT_NAME,

    ACR_ATT_TYPE,
    ACR_ATT_SIZE,
    ACR_ATT_NUMBER
} AttributesCatAtts;

typedef enum AttributesCatAttsSize{
    /* Unambiguous identification */
    ACR_ATT_REL_NAME_SIZE = 50,
    ACR_ATT_NAME_SIZE = 50,

    ACR_ATT_TYPE_SIZE = 4,
    ACR_ATT_SIZE_SIZE = 4,
    ACR_ATT_NUMBER_SIZE = 4
} AttributesCatAttsSize;

Relation *
GetCatalogAttributes(void);

int32
CheckExistAttribute(Relation *catalog_attributes, 
                    const char *rel_name, const char *att_name);

int32
GetAttributeType(Relation *catalog_attributes,
                 const char *rel_name, const char *att_name);

int32
GetNumberRelAttributes(Relation *catalog_attributes, const char *rel_name);