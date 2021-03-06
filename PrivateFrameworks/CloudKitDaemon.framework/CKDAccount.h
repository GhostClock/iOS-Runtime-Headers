/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class ACAccountStore, ACAccountType, CKDBackingAccount, CKDClientContext, NSString;

@interface CKDAccount : NSObject <CKDAccountInfoProvider> {
    ACAccountType *_acAccountType;
    ACAccountStore *_accountStore;
    BOOL _accountWantsPushRegistration;
    CKDBackingAccount *_backingAccount;
    CKDClientContext *_context;
    BOOL _haveWarnedAboutServerPreferredPushEnvironment;
    BOOL _isAnonymousAccount;
    BOOL _isUnitTestingAccount;
}

@property(retain) ACAccountType * acAccountType;
@property(readonly) NSString * accountID;
@property(readonly) NSString * accountIdentifier;
@property(retain) ACAccountStore * accountStore;
@property BOOL accountWantsPushRegistration;
@property(readonly) BOOL allowsCellularAccess;
@property(readonly) CKDBackingAccount * backingAccount;
@property(readonly) BOOL cloudKitIsEnabled;
@property(readonly) BOOL cloudPhotosIsEnabled;
@property CKDClientContext * context;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL haveWarnedAboutServerPreferredPushEnvironment;
@property BOOL isAnonymousAccount;
@property(readonly) BOOL isFakeAccount;
@property BOOL isUnitTestingAccount;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithContext:(id)arg1;
- (id)_urlBySettingCustomBaseURL:(id)arg1 onURL:(id)arg2;
- (id)acAccountType;
- (id)accountID;
- (id)accountIdentifier;
- (id)accountStore;
- (BOOL)accountWantsPushRegistration;
- (BOOL)allowsCellularAccess;
- (id)applicationBundle;
- (id)backingAccount;
- (id)baseURLForServerType:(int)arg1 partitionType:(int)arg2;
- (id)bundleID;
- (BOOL)canAccessAccount;
- (id)cloudKitAuthToken;
- (BOOL)cloudKitIsEnabled;
- (BOOL)cloudPhotosIsEnabled;
- (id)config;
- (id)containerID;
- (id)containerScopedUserID;
- (id)context;
- (id)description;
- (id)deviceName;
- (id)dsid;
- (id)enabledKeyboards;
- (void)fetchConfigurationUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(id)arg3;
- (void)fetchContainerScopedUserIDUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(id)arg3;
- (void)fetchDeviceIDUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(id)arg3;
- (void)fetchPublicURLUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 serverType:(int)arg3 completionHandler:(id)arg4;
- (id)hardwareID;
- (BOOL)haveWarnedAboutServerPreferredPushEnvironment;
- (id)iCloudAuthToken;
- (id)initAnonymousAccountWithContext:(id)arg1;
- (id)initFakeAccountWithEmail:(id)arg1 password:(id)arg2 context:(id)arg3;
- (id)initPrimaryAccountWithContext:(id)arg1;
- (id)initWithAccountID:(id)arg1 context:(id)arg2;
- (BOOL)isAnonymousAccount;
- (BOOL)isFakeAccount;
- (BOOL)isUnitTestingAccount;
- (id)languageCode;
- (id)mescalSession;
- (void)noteFailedNetworkRequest;
- (void)noteFailedProtocolRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (id)regionCode;
- (void)renewAuthTokenWithCompletionHandler:(id)arg1;
- (void)renewMescalSessionForRequest:(id)arg1 withCompletionHandler:(id)arg2;
- (void)resetMescalSession;
- (id)serverPreferredPushEnvironment;
- (void)setAcAccountType:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (void)setAccountWantsPushRegistration:(BOOL)arg1;
- (void)setContext:(id)arg1;
- (void)setHaveWarnedAboutServerPreferredPushEnvironment:(BOOL)arg1;
- (void)setIsAnonymousAccount:(BOOL)arg1;
- (void)setIsUnitTestingAccount:(BOOL)arg1;
- (BOOL)shouldFailAllTasks;
- (id)trafficContainerIdentifier;

@end
