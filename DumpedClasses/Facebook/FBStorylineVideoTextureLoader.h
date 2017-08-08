//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIContext, EAGLContext, FBRCTVideoReader, NSString;

@interface FBStorylineVideoTextureLoader : NSObject
{
    FBRCTVideoReader *_reader;
    NSString *_renderingVideoURL;
    struct opaqueCMSampleBuffer *_lastBuffer;
    CIContext *_ciContext;
    unsigned int _framebuffer;
    unsigned int _textureId;
    struct CGAffineTransform _videoPrefferedTransform;
    struct CGRect _videoRect;
    EAGLContext *_context;
    double _currentTime;
}

@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_releaseLastBuffer;
- (void)_cleanUpTexture;
- (id)_createGLObjectFromCVImageBuffer:(struct __CVBuffer *)arg1;
- (void)readerSeekToTime:(double)arg1;
- (id)loadCurrentTexture;
- (id)loadNextTextureAtTime:(double)arg1;
- (id)initWithURL:(id)arg1 startTime:(double)arg2 outputSize:(struct CGSize)arg3 context:(id)arg4;
- (void)dealloc;

@end
