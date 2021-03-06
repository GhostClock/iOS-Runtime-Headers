/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKRecord, CKSQLite, NSArray, NSData, NSString, NSURL;

@interface CKPackage : NSObject <CKRecordValue, NSSecureCoding> {
    NSString *_UUID;
    NSString *_anchorPath;
    NSString *_applicationBundleID;
    NSArray *_assets;
    BOOL _downloaded;
    NSURL *_fileURL;
    BOOL _hasSize;
    unsigned int _nextItemIndex;
    BOOL _open;
    BOOL _ownsTheAnchor;
    int _packageID;
    CKRecord *_record;
    NSString *_recordKey;
    struct _OpaquePCSShareProtection { } *_recordPCS;
    unsigned long long _size;
    CKSQLite *_sqlite;
    BOOL _transaction;
    BOOL _uploaded;
    BOOL _wasCached;
}

@property(retain) NSString * UUID;
@property(retain) NSString * anchorPath;
@property(retain) NSString * applicationBundleID;
@property(copy) NSArray * assets;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property BOOL downloaded;
@property(retain) NSURL * fileURL;
@property BOOL hasSize;
@property(readonly) unsigned int hash;
@property unsigned int nextItemIndex;
@property(getter=isOpen) BOOL open;
@property BOOL ownsTheAnchor;
@property int packageID;
@property CKRecord * record;
@property(copy) NSString * recordKey;
@property struct _OpaquePCSShareProtection { }* recordPCS;
@property(copy) NSData * signature;
@property unsigned long long size;
@property(retain) CKSQLite * sqlite;
@property(readonly) Class superclass;
@property(getter=inTransaction) BOOL transaction;
@property BOOL uploaded;
@property BOOL wasCached;

+ (id)BRBundleID;
+ (id)_packagesPathForBundleID:(id)arg1;
+ (void)destroyPackageAnchoredAtURL:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)UUID;
- (id)_initWithPath:(id)arg1 UUID:(id)arg2;
- (id)_itemOrNilAtIndex:(unsigned int)arg1;
- (id)_itemWithColumnsByName:(id)arg1;
- (id)_packageDatabasePathWithUUID:(id)arg1;
- (id)_prettyDictionaryRepresentation;
- (void)_setReferenceCount:(int)arg1;
- (void)addItem:(id)arg1;
- (void)addSection:(id)arg1;
- (id)anchorPath;
- (id)applicationBundleID;
- (id)assets;
- (void)beginTransaction;
- (void)close;
- (void)dealloc;
- (BOOL)decReferenceCount;
- (id)description;
- (void)destroy;
- (BOOL)downloaded;
- (void)encodeWithCoder:(id)arg1;
- (void)endTransaction;
- (id)fileURL;
- (BOOL)hasSize;
- (BOOL)inTransaction;
- (void)incReferenceCount;
- (id)init;
- (id)initWithAnchorURL:(id)arg1;
- (id)initWithArchivedAnchoredPackage:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAnchorStillValid;
- (BOOL)isOpen;
- (id)itemAtIndex:(unsigned int)arg1;
- (unsigned int)itemCount;
- (id)itemEnumerator;
- (id)itemEnumeratorForSectionAtIndex:(unsigned int)arg1;
- (unsigned int)nextItemIndex;
- (void)open;
- (BOOL)ownsTheAnchor;
- (int)packageID;
- (id)record;
- (id)recordKey;
- (struct _OpaquePCSShareProtection { }*)recordPCS;
- (id)replacementObjectForCoder:(id)arg1;
- (id)sectionAtIndex:(unsigned int)arg1;
- (unsigned int)sectionCount;
- (void)setAnchorPath:(id)arg1;
- (void)setApplicationBundleID:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setDownloaded:(BOOL)arg1;
- (void)setFileURL:(id)arg1;
- (void)setHasSize:(BOOL)arg1;
- (void)setNextItemIndex:(unsigned int)arg1;
- (void)setOpen:(BOOL)arg1;
- (void)setOwnsTheAnchor:(BOOL)arg1;
- (void)setPackageID:(int)arg1;
- (void)setRecord:(id)arg1;
- (void)setRecordKey:(id)arg1;
- (void)setRecordPCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setSignature:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setSqlite:(id)arg1;
- (void)setTransaction:(BOOL)arg1;
- (void)setUUID:(id)arg1;
- (void)setUploaded:(BOOL)arg1;
- (void)setWasCached:(BOOL)arg1;
- (id)signature;
- (unsigned long long)size;
- (id)sqlite;
- (void)updateItemAtIndex:(int)arg1 withFileURL:(id)arg2;
- (void)updateItemAtIndex:(int)arg1 withSignature:(id)arg2 size:(unsigned long long)arg3 itemID:(unsigned long long)arg4 sectionIndex:(unsigned int)arg5;
- (void)updateItemsAtIndexes:(id)arg1 fileURLs:(id)arg2;
- (BOOL)uploaded;
- (BOOL)wasCached;

@end
