//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NMMVViewFullScreenUpdateDelegate.h"

@class NMMVPlayButton, NMMVSlider, NMVideoPlayViewFullScreenButton, NSString, UIColor;

@interface NMVideoControlBar : UIView <NMMVViewFullScreenUpdateDelegate>
{
    UIColor *_controlBgColorFull;
    _Bool _isFullScreen;
    id _delegate;
    NMMVSlider *_slider;
    NMMVPlayButton *_playButton;
    NMVideoPlayViewFullScreenButton *_zoomButton;
}

+ (double)controlViewHeight:(_Bool)arg1;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(retain, nonatomic) NMVideoPlayViewFullScreenButton *zoomButton; // @synthesize zoomButton=_zoomButton;
@property(retain, nonatomic) NMMVPlayButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) NMMVSlider *slider; // @synthesize slider=_slider;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)enableFullScreenSwitch:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)togglePlayStatus:(_Bool)arg1;
- (void)updateBgColorForFullScreenSwitch:(_Bool)arg1;
- (void)updateViewForFullScreenSwitch:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
