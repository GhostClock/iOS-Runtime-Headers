/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPQueueFeeder;

@interface MPQueueFeederState : NSObject  {
    MPQueueFeeder *_feeder;
    unsigned int _currentItemIndex;
    double _currentTime;
    int _feederMode;
}

@property int feederMode;
@property double currentTime;
@property unsigned int currentItemIndex;
@property(retain) MPQueueFeeder * feeder;


- (void)dealloc;
- (id)description;
- (unsigned int)currentItemIndex;
- (void)setCurrentItemIndex:(unsigned int)arg1;
- (id)initWithStateOfAVController:(id)arg1;
- (int)feederMode;
- (void)setFeeder:(id)arg1;
- (id)feeder;
- (void)setFeederMode:(int)arg1;
- (double)currentTime;
- (void)setCurrentTime:(double)arg1;

@end