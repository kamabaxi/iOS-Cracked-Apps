//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPChatNewsMessageView.h"

@class APRichTextLabel, PPChatColorBar, UIImage, UIImageView, UILabel, UIView;

@interface PPChatSingleNewsMessageView : PPChatNewsMessageView
{
    _Bool _showsIconImage;
    APRichTextLabel *_titleLabel;
    APRichTextLabel *_descriptionLabel;
    UILabel *_dateLabel;
    UIImageView *_topicImageView;
    UIView *_topicImageContainer;
    UILabel *_linkLabel;
    UIImageView *_arrowView;
    UIView *_separatorLine;
    PPChatColorBar *_colorBar;
    UIImageView *_logoImageView;
    UIImageView *_iconImageView;
    UIImage *_logoViewPlaceholder;
    UIImage *_topicViewPlaceholder;
    UIImage *_iconViewPlaceholder;
    UIImage *_titleViewPlaceholder;
    UILabel *_newsTitleLabel;
}

+ (double)heightOfExtraDetailView:(id)arg1;
+ (double)heightOfExtraHeadView:(id)arg1;
+ (double)heightOfTitleLabel:(id)arg1 hasLogo:(_Bool)arg2 titleWidth:(double)arg3;
+ (double)heightOfDescriptionLabel:(id)arg1 width:(double)arg2;
+ (double)heightForData:(id)arg1 ofMessage:(id)arg2;
+ (_Bool)showIconForMessage:(id)arg1;
@property(retain, nonatomic) UILabel *newsTitleLabel; // @synthesize newsTitleLabel=_newsTitleLabel;
@property(retain, nonatomic) UIImage *titleViewPlaceholder; // @synthesize titleViewPlaceholder=_titleViewPlaceholder;
@property(retain, nonatomic) UIImage *iconViewPlaceholder; // @synthesize iconViewPlaceholder=_iconViewPlaceholder;
@property(retain, nonatomic) UIImage *topicViewPlaceholder; // @synthesize topicViewPlaceholder=_topicViewPlaceholder;
@property(retain, nonatomic) UIImage *logoViewPlaceholder; // @synthesize logoViewPlaceholder=_logoViewPlaceholder;
@property(nonatomic) _Bool showsIconImage; // @synthesize showsIconImage=_showsIconImage;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) PPChatColorBar *colorBar; // @synthesize colorBar=_colorBar;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *linkLabel; // @synthesize linkLabel=_linkLabel;
@property(retain, nonatomic) UIView *topicImageContainer; // @synthesize topicImageContainer=_topicImageContainer;
@property(retain, nonatomic) UIImageView *topicImageView; // @synthesize topicImageView=_topicImageView;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) APRichTextLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) APRichTextLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setTitleViewPlaceholderImage:(id)arg1;
- (void)setIconViewPlaceholderImage:(id)arg1;
- (void)setTopicViewPlaceholderImage:(id)arg1;
- (void)setLogoViewPlaceholderImage:(id)arg1;
- (void)layoutSubviews;
- (void)loadData:(id)arg1;
- (id)extraDetailView;
- (id)extraHeadView;
- (void)setArrowViewImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
