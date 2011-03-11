/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class SPSearchQuery, <SPDaemonQueryDelegate>;

@interface SPDaemonQueryToken : NSObject  {
    struct __CFMachPort { } *_callbackPort;
    SPSearchQuery *_query;
    <SPDaemonQueryDelegate> *_delegate;
    unsigned int _queryID;
    unsigned int _sortsInFlight;
    BOOL _completed;
}

@property <SPDaemonQueryDelegate> * delegate;
@property(readonly) unsigned int queryID;
@property(readonly) SPSearchQuery * query;
@property unsigned int sortsInFlight;
@property BOOL completed;


- (void)setCompleted:(BOOL)arg1;
- (id)query;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_sendError:(id)arg1;
- (BOOL)completed;
- (unsigned int)queryID;
- (void)_callbackPipeBrokenCallback:(struct __CFMachPort { }*)arg1;
- (void)_sendCompletion;
- (void)setSortsInFlight:(unsigned int)arg1;
- (unsigned int)sortsInFlight;
- (void)_sendResults:(id)arg1;
- (id)initWithQuery:(id)arg1 andCallbackPort:(unsigned int)arg2;

@end