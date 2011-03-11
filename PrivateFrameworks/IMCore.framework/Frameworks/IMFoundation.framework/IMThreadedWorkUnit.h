/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSTimer;

@interface IMThreadedWorkUnit : NSObject  {
    id _delegate;
    BOOL _kill;
    BOOL _inProgress;
    double _timeout;
    NSTimer *_timeoutTimer;
    BOOL _done;
}

@property(readonly) BOOL done;
@property(readonly) BOOL inProgress;
@property id delegate;
@property double timeout;


- (BOOL)done;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)stopWatchingThread;
- (void)_workerThreadFinished;
- (void)_clearTimeoutTimer;
- (void)_timeoutHit:(id)arg1;
- (void)_setTimeoutTimer;
- (void)_threadedDoStart;
- (void)_doSendDone;
- (void)_timedOut;
- (void)startThread;
- (BOOL)inProgress;
- (void)_workerThread;
- (double)timeout;
- (void)setTimeout:(double)arg1;

@end