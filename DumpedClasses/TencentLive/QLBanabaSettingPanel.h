//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLCustomLableSliderProtocol.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, QLCustomLableSlider, UIButton, UILabel;

@interface QLBanabaSettingPanel : UIView <UIGestureRecognizerDelegate, QLCustomLableSliderProtocol>
{
    _Bool _isAnimateing;
    id <QLBanabaSettingPanelProtocol> _delegate;
    UIView *_backgroundView;
    UILabel *_titleLabel;
    QLCustomLableSlider *_banabaSettingAlphaSlider;
    QLCustomLableSlider *_banabaSettingFontSlider;
    QLCustomLableSlider *_banabaSettingAreaSlider;
    QLCustomLableSlider *_banabaSettingSpeedSlider;
    UIButton *_resetButton;
}

@property(nonatomic) _Bool isAnimateing; // @synthesize isAnimateing=_isAnimateing;
@property(retain, nonatomic) UIButton *resetButton; // @synthesize resetButton=_resetButton;
@property(retain, nonatomic) QLCustomLableSlider *banabaSettingSpeedSlider; // @synthesize banabaSettingSpeedSlider=_banabaSettingSpeedSlider;
@property(retain, nonatomic) QLCustomLableSlider *banabaSettingAreaSlider; // @synthesize banabaSettingAreaSlider=_banabaSettingAreaSlider;
@property(retain, nonatomic) QLCustomLableSlider *banabaSettingFontSlider; // @synthesize banabaSettingFontSlider=_banabaSettingFontSlider;
@property(retain, nonatomic) QLCustomLableSlider *banabaSettingAlphaSlider; // @synthesize banabaSettingAlphaSlider=_banabaSettingAlphaSlider;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <QLBanabaSettingPanelProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hideAnimation;
- (void)showAnimation;
- (void)resetAllSliderValue;
- (void)willShowSettingPanel;
- (void)resetAllSlider;
- (void)resetButtonClick:(id)arg1;
- (void)layoutSubviews;
- (void)didSliderSlideEnd:(id)arg1;
- (void)didTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
