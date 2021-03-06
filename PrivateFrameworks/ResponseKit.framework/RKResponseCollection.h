/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@class NSMutableDictionary, NSString;

@interface RKResponseCollection : NSObject {
    NSString *_context;
    NSMutableDictionary *_phraseMap;
    NSMutableDictionary *_responseCatalogEditable;
    NSMutableDictionary *_responseCatalogNonEditable;
}

@property(retain) NSString * context;
@property(retain) NSMutableDictionary * phraseMap;
@property(retain) NSMutableDictionary * responseCatalogEditable;
@property(retain) NSMutableDictionary * responseCatalogNonEditable;

+ (id)responseCollectionWithContext:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithContext:(id)arg1;
- (id)context;
- (void)dumpResponseCatalog;
- (id)init;
- (id)phraseMap;
- (void)resetPhraseMap;
- (void)resetResponseCatalog;
- (id)responseCatalogEditable;
- (id)responseCatalogNonEditable;
- (id)responsesForCategory:(unsigned int)arg1 gender:(unsigned int)arg2 maximumResponses:(unsigned int)arg3 withLanguage:(id)arg4 options:(unsigned int)arg5;
- (id)responsesForFixedPhrase:(id)arg1 withLanguage:(id)arg2;
- (void)setContext:(id)arg1;
- (void)setPhraseMap:(id)arg1;
- (void)setResponseCatalogEditable:(id)arg1;
- (void)setResponseCatalogNonEditable:(id)arg1;

@end
