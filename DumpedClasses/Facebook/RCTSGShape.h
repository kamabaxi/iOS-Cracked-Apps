//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTSGImage.h"

@interface RCTSGShape : RCTSGImage
{
    unsigned int _textureId;
    struct CGContext *_context;
    int _width;
    int _height;
}

@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
- (struct CGContext *)_getCGContext;
- (unsigned int)_createTextureFromPaths;
- (void)dealloc;
- (void)renderGather:(struct RCTSGRenderContext *)arg1 sgview:(id)arg2 matrixStack:(struct RCTSGMatrix *)arg3;

@end
