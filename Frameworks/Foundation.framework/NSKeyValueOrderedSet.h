/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSObject, NSString, NSKeyValueNonmutatingOrderedSetMethodSet;

@interface NSKeyValueOrderedSet : NSOrderedSet <NSKeyValueProxyCaching> {
    NSObject *_container;
    NSString *_key;
    NSKeyValueNonmutatingOrderedSetMethodSet *_methods;
}

+ (id)_proxyShare;
+ (struct { unsigned int x1; id x2[4]; }*)_proxyNonGCPoolPointer;

- (unsigned int)indexOfObject:(id)arg1;
- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (struct { id x1; id x2; })_proxyLocator;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)objectsAtIndexes:(id)arg1;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned int)arg1;
- (void)dealloc;

@end