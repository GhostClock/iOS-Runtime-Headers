/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
 */

@class <VUPublishPostDelegate>;

@interface VUPublishPost : NSObject {
    BOOL _allowsCellularAccessForUploads;
    <VUPublishPostDelegate> *_delegate;
}

@property BOOL allowsCellularAccessForUploads;

- (void).cxx_destruct;
- (BOOL)allowsCellularAccessForUploads;
- (id)initWithDelegate:(id)arg1;
- (void)setAllowsCellularAccessForUploads:(BOOL)arg1;
- (void)startUpload;

@end
