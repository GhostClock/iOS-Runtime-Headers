/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage, NSArray, GKPlayer, NSMutableDictionary;

@interface GKAchievementCompareViewControllerPrivate : GKAchievementViewControllerPrivate  {
    GKPlayer *_friend;
    unsigned int _friendPointsTally;
    UIImage *_compositeCheckMark;
    NSArray *_friendAchievements;
    unsigned int _friendNumberOfAchievementsAchieved;
    NSMutableDictionary *_friendAchievementDictionary;
}

@property(retain) NSMutableDictionary * friendAchievementDictionary;
@property(retain) UIImage * compositeCheckMark;
@property unsigned int friendPointsTally;
@property unsigned int friendNumberOfAchievementsAchieved;
@property(retain) NSArray * friendAchievements;
@property(retain) GKPlayer * friend;


- (unsigned int)friendNumberOfAchievementsAchieved;
- (id)initWithGame:(id)arg1 withFriend:(id)arg2;
- (id)compositeCheckMark;
- (void)_gkRefreshContents;
- (void)addNonAchievedAchievementsTo:(id)arg1 withAchievementDescription:(id)arg2;
- (void)updateFriendGameAchievements:(id)arg1;
- (id)headerCellAtIndexPath:(id)arg1;
- (id)achievementCompareCellAtIndexPath:(id)arg1;
- (id)friendAchievementDictionary;
- (void)setFriendAchievementDictionary:(id)arg1;
- (void)setCompositeCheckMark:(id)arg1;
- (unsigned int)friendPointsTally;
- (void)setFriendPointsTally:(unsigned int)arg1;
- (void)setFriendNumberOfAchievementsAchieved:(unsigned int)arg1;
- (id)friendAchievements;
- (void)setFriendAchievements:(id)arg1;
- (id)friend;
- (void)setFriend:(id)arg1;
- (void)updateStatusWithError:(id)arg1;
- (void)playTapped;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)viewDidLoad;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)viewDidUnload;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)title;
- (void)dealloc;

@end