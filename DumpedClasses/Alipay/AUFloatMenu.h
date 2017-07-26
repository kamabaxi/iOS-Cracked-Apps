//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIImageView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface AUFloatMenu : UIView <UIGestureRecognizerDelegate>
{
    _Bool _isAnimating;
    _Bool _updateArrchView;
    _Bool _updateArchPointX;
    double _marginToRight;
    UIImageView *_backgroundView;
    UIView *_listBgView;
    UIImageView *_arrIconView;
    UIView *_contentView;
    UITapGestureRecognizer *_tapGest;
    UIPanGestureRecognizer *_panGest;
    double _orignY;
    double _arrIconXLeft;
    struct CGPoint _position;
    struct CGPoint _tapPostion;
    struct CGRect _functionRegion;
}

+ (id)showAtPostion:(struct CGPoint)arg1 startOrignY:(double)arg2 items:(id)arg3;
+ (id)showAtPostion:(struct CGPoint)arg1 items:(id)arg2;
@property(nonatomic) _Bool updateArchPointX; // @synthesize updateArchPointX=_updateArchPointX;
@property(nonatomic) double arrIconXLeft; // @synthesize arrIconXLeft=_arrIconXLeft;
@property(nonatomic) double orignY; // @synthesize orignY=_orignY;
@property(nonatomic) _Bool updateArrchView; // @synthesize updateArrchView=_updateArrchView;
@property(retain, nonatomic) UIPanGestureRecognizer *panGest; // @synthesize panGest=_panGest;
@property(retain, nonatomic) UITapGestureRecognizer *tapGest; // @synthesize tapGest=_tapGest;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *arrIconView; // @synthesize arrIconView=_arrIconView;
@property(retain, nonatomic) UIView *listBgView; // @synthesize listBgView=_listBgView;
@property(nonatomic) struct CGRect functionRegion; // @synthesize functionRegion=_functionRegion;
@property(nonatomic) struct CGPoint tapPostion; // @synthesize tapPostion=_tapPostion;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double marginToRight; // @synthesize marginToRight=_marginToRight;
- (void).cxx_destruct;
- (void)updateWithItems:(id)arg1;
- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)doPressedBt:(id)arg1;
- (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (void)dismiss;
- (void)showWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1 withMskView:(_Bool)arg2;
- (void)loadSubviewWithItems:(id)arg1 orignY:(double)arg2 animated:(_Bool)arg3;
- (void)doTap:(id)arg1;
- (void)navigationBarDismissNotification:(id)arg1;
- (void)statusBarFrameChanged:(id)arg1;
- (double)getContentWidth;
- (void)updateArrIconFrameX:(double)arg1;
- (void)updateIconViewFrame;
- (id)initWithFrame:(struct CGRect)arg1 atPostion:(struct CGPoint)arg2;
- (id)initWithPostion:(struct CGPoint)arg1 items:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
