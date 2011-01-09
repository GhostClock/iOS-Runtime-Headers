/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MLQuery;



@interface MLQueryImpl : NSObject 
{
    MLQuery *_query;
    struct __CFArray { } *_queryResults;
    NSUInteger _countOfUniqueItemsByGroupingProperty;
    unsigned int _trackGroupMembers : 1;
    struct __CFDictionary { } *_groupMembers;
    unsigned int _orderingIsSorted : 1;
    unsigned int _wasSortedAlphabetically : 1;
    unsigned int _registeredAsCachedQuery : 1;
}

+ (id)findCachedQueryImplMatchingCriteriaOfQuery:(id)arg1;
+ (void)registerQueryImpl:(id)arg1 forCriteriaOfQuery:(id)arg2;
+ (void)reset;
+ (void)resetAndInvalidate:(id)arg1;
+ (void)resetAndInvalidate;
+ (id)recursiveEvaluationLock;
+ (Class)implClassForEvaluatingQuery:(id)arg1;

- (void)freeQueryResults;
- (id)copyQueryResultsDescription;
- (id)shallowDebugDescription;
- (id)description;
- (void)dealloc;
- (void)evaluate;
- (void)evaluateQuery:(id)arg1;
- (BOOL)orderingIsSorted;
- (BOOL)wasSortedAlphabetically;
- (NSUInteger)countOfEntities;
- (id)entityAtIndex:(NSUInteger)arg1;
- (NSUInteger)indexOfEntity:(id)arg1;
- (NSUInteger)indexOfFirstEntityMatchingPredicates:(id)arg1;
- (NSUInteger)indexOfFirstEntityMatchingPredicate:(id)arg1;
- (BOOL)entityMatchesPredicates:(id)arg1 entityIndex:(NSUInteger)arg2;
- (BOOL)entityMatchesPredicate:(id)arg1 entityIndex:(NSUInteger)arg2;
- (NSInteger)entityTypeOfEntityAtIndex:(NSUInteger)arg1;
- (id)stringValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (unsigned short)firstCharacterForStringProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (unsigned long long)unsignedValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (double)timeValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (void)visitGroupMembersOfEntityAtIndex:(NSUInteger)arg1 visitor:(int (*)())arg2 context:(void*)arg3;
- (NSUInteger)countOfEntitiesGroupedByEntityAtIndex:(NSUInteger)arg1;
- (id)representativeTrackForEntityAtIndex:(NSUInteger)arg1;
- (id)containingPlaylist;
- (unsigned short)bucketCharForCharacter:(unsigned short)arg1;
- (struct __CFArray { }*)bucketizedInfoByFirstCharacterForStringProperty:(unsigned long)arg1;
- (id)bucketizedInfoByGroupingStringProperty:(unsigned long)arg1;

@end