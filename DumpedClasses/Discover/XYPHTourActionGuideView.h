//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, NSArray, NSString, UIImage, UIImageView, XYPHTourActionGuide, XYPHTourActionGuideMessage;

@interface XYPHTourActionGuideView : UIView
{
    XYPHTourActionGuide *_actionGuide;
    NSString *_userDefaultKey;
    NSString *_userDefaultKeyNeedSet;
    UIImage *_backImage;
    XYPHTourActionGuideMessage *_titleLabel;
    CDUnknownBlockType _showLabelHandler;
    UIImageView *_backView;
    CAShapeLayer *_maskLayer;
    NSArray *_maskPathArray;
}

@property(retain, nonatomic) NSArray *maskPathArray; // @synthesize maskPathArray=_maskPathArray;
@property(retain) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UIImageView *backView; // @synthesize backView=_backView;
@property(copy, nonatomic) CDUnknownBlockType showLabelHandler; // @synthesize showLabelHandler=_showLabelHandler;
@property(retain, nonatomic) XYPHTourActionGuideMessage *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImage *backImage; // @synthesize backImage=_backImage;
@property(retain, nonatomic) NSString *userDefaultKeyNeedSet; // @synthesize userDefaultKeyNeedSet=_userDefaultKeyNeedSet;
@property(retain, nonatomic) NSString *userDefaultKey; // @synthesize userDefaultKey=_userDefaultKey;
@property(retain, nonatomic) XYPHTourActionGuide *actionGuide; // @synthesize actionGuide=_actionGuide;
- (void).cxx_destruct;
- (float)resetTourView;
- (void)cleanup:(float)arg1;
- (void)start;
- (void)userDidTap:(id)arg1;
- (void)goToTour;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

