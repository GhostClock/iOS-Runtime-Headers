/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKMapSnapshotRequest, NSMutableArray, UIImage;

@interface MKMapSnapshotCreator : NSObject <MKMapViewDelegate> {
    UIImage *_lastSnapshot;
    NSMutableArray *_requests;
    MKMapSnapshotRequest *_servingRequest;
    struct BillingPointTracker { int x1; int x2; struct MapPoint { 
            int latitude_; 
            int longitude_; 
            int x_pixels_at_max_zoom_; 
            int y_pixels_at_max_zoom_; 
        } x3; int x4; int x5; unsigned char x6; } *_billingPointTracker;
}

@property(retain) MKMapSnapshotRequest * servingRequest;


- (id)init;
- (void)dealloc;
- (id)servingRequest;
- (void)_processRequest;
- (void)_processRequestOnMainThread;
- (id)_composeSnapshotWithView:(id)arg1;
- (void)_respondWithSnapshot;
- (void)createSnapShotWithCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(unsigned int)arg2 size:(struct CGSize { float x1; float x2; })arg3 requester:(id)arg4 context:(id)arg5;
- (id)recreateCurrentSnapshotWithRequester:(id)arg1 context:(id)arg2;
- (void)flushRequestQueue;
- (void)setServingRequest:(id)arg1;
- (void)didDisplaySnapShotWithCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(unsigned int)arg2 size:(struct CGSize { float x1; float x2; })arg3;

@end