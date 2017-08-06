//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeImageView, KGThemeLabel, UIColor, UIImageView;

@interface KTVLisZanComGiftNumView : UIView
{
    long long playnum;
    long long zannum;
    long long commentnum;
    long long giftnum;
    int _scoreType;
    int _averageScore;
    int _totalScore;
    UIImageView *_averageicon;
    KGThemeLabel *_totalScoreLab;
    _Bool _isAutoSkin;
    KGThemeImageView *_hoticon;
    KGThemeLabel *_hotlab;
    KGThemeImageView *_playicon;
    KGThemeLabel *_playlab;
    KGThemeImageView *_zanicon;
    KGThemeLabel *_zanlab;
    KGThemeImageView *_commenticon;
    KGThemeLabel *_commentlab;
    KGThemeImageView *_gifticon;
    KGThemeLabel *_giftlab;
    UIColor *_skinColor;
    double _iconLabWidth;
    double _labWidth;
    long long _cutNum;
    double _maxWidth;
    long long _hotNum;
}

+ (id)getScoreImageWithScoreRankStr:(id)arg1;
@property(nonatomic) long long hotNum; // @synthesize hotNum=_hotNum;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) long long cutNum; // @synthesize cutNum=_cutNum;
@property(nonatomic) double labWidth; // @synthesize labWidth=_labWidth;
@property(nonatomic) double iconLabWidth; // @synthesize iconLabWidth=_iconLabWidth;
@property(retain, nonatomic) UIColor *skinColor; // @synthesize skinColor=_skinColor;
@property(nonatomic) _Bool isAutoSkin; // @synthesize isAutoSkin=_isAutoSkin;
@property(retain, nonatomic) KGThemeLabel *giftlab; // @synthesize giftlab=_giftlab;
@property(retain, nonatomic) KGThemeImageView *gifticon; // @synthesize gifticon=_gifticon;
@property(retain, nonatomic) KGThemeLabel *commentlab; // @synthesize commentlab=_commentlab;
@property(retain, nonatomic) KGThemeImageView *commenticon; // @synthesize commenticon=_commenticon;
@property(retain, nonatomic) KGThemeLabel *zanlab; // @synthesize zanlab=_zanlab;
@property(retain, nonatomic) KGThemeImageView *zanicon; // @synthesize zanicon=_zanicon;
@property(retain, nonatomic) KGThemeLabel *playlab; // @synthesize playlab=_playlab;
@property(retain, nonatomic) KGThemeImageView *playicon; // @synthesize playicon=_playicon;
@property(retain, nonatomic) KGThemeLabel *hotlab; // @synthesize hotlab=_hotlab;
@property(retain, nonatomic) KGThemeImageView *hoticon; // @synthesize hoticon=_hoticon;
- (void).cxx_destruct;
- (void)scoreTypeInviteSongSetFrame;
- (void)scoreTypeInviteSongSetWithScore:(id)arg1;
- (void)scoreTypeListenSetFrame;
- (void)createViewWithScore:(id)arg1;
- (void)scoreTypeListenSetWithScore:(id)arg1;
- (void)changeGiftNum:(long long)arg1;
- (void)changeCommentNum:(long long)arg1;
- (void)changeZanNum:(long long)arg1;
- (void)changePlayNum:(long long)arg1;
- (void)addGiftNum;
- (void)addCommentNum;
- (void)addZanNum;
- (void)addPlayNum;
- (void)setPlayNumStr:(id)arg1 zanNumStr:(id)arg2 commentNumStr:(id)arg3 giftNumStr:(id)arg4;
- (void)setPlayNum:(long long)arg1 zanNum:(long long)arg2 commentNum:(long long)arg3 giftNum:(long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end
