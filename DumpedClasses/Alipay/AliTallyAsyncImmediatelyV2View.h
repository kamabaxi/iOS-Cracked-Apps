//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface AliTallyAsyncImmediatelyV2View : UIView
{
    double _offsetY;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
- (void).cxx_destruct;
- (void)buildSubViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 imageOffsetY:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
