//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMAnimatedFrameView, NMBarButton, NSTimer, UIButton, UILabel;

@interface NMARCommentCardView : UIView
{
    id <NMARCommentCardViewDelegate> _delegate;
    NMAnimatedFrameView *_commentBgView;
    UILabel *_commentLabel;
    UILabel *_sourceLabel;
    UIButton *_shareButton;
    NMBarButton *_closeButton;
    NSTimer *_animationTimer;
}

@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(retain, nonatomic) NMBarButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) NMAnimatedFrameView *commentBgView; // @synthesize commentBgView=_commentBgView;
@property(nonatomic) __weak id <NMARCommentCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)commentCardSharedImage;
- (void)_drawGradientLineAt:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2;
- (void)shareButtonClicked:(id)arg1;
- (void)closeButtonClicked:(id)arg1;
- (void)toggleAnimation;
- (void)autoAnimation:(id)arg1;
- (void)showComment:(id)arg1 songName:(id)arg2;
- (void)layoutSubviews;
- (id)init;
- (void)dealloc;

@end
