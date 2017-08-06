//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class KGThemeImageView, NSString, UIImage, UIImageView, UILabel, UIView;

@interface FXStarCollectionCell : UICollectionViewCell
{
    long long _cellRoomId;
    UIImageView *_headImgView;
    UIImageView *_liveImgView;
    UILabel *_musicLabel;
    UILabel *_nameLabel;
    UIImageView *_bottomBGView;
    UIImageView *_musicImageView;
    NSString *_headUrl;
    UIImageView *_mobileLiveIcon;
    UIImage *_defalutImage;
    KGThemeImageView *_peopleImgView;
    UILabel *_numPeopleLabel;
    UIView *_headerMaskView;
    UIImageView *_cityImageView;
    UILabel *_cityLabel;
    UIView *_fxSelectedView;
}

@property(retain, nonatomic) UIView *fxSelectedView; // @synthesize fxSelectedView=_fxSelectedView;
@property(retain, nonatomic) UILabel *cityLabel; // @synthesize cityLabel=_cityLabel;
@property(retain, nonatomic) UIImageView *cityImageView; // @synthesize cityImageView=_cityImageView;
@property(retain, nonatomic) UIView *headerMaskView; // @synthesize headerMaskView=_headerMaskView;
@property(retain, nonatomic) UILabel *numPeopleLabel; // @synthesize numPeopleLabel=_numPeopleLabel;
@property(retain, nonatomic) KGThemeImageView *peopleImgView; // @synthesize peopleImgView=_peopleImgView;
@property(retain, nonatomic) UIImage *defalutImage; // @synthesize defalutImage=_defalutImage;
@property(retain, nonatomic) UIImageView *mobileLiveIcon; // @synthesize mobileLiveIcon=_mobileLiveIcon;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(retain, nonatomic) UIImageView *musicImageView; // @synthesize musicImageView=_musicImageView;
@property(retain, nonatomic) UIImageView *bottomBGView; // @synthesize bottomBGView=_bottomBGView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *musicLabel; // @synthesize musicLabel=_musicLabel;
@property(retain, nonatomic) UIImageView *liveImgView; // @synthesize liveImgView=_liveImgView;
@property(retain, nonatomic) UIImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(nonatomic) long long cellRoomId; // @synthesize cellRoomId=_cellRoomId;
- (void).cxx_destruct;
- (void)dealloc;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)cutCityStr:(id)arg1;
- (void)setSingerState:(long long)arg1;
- (void)setMobileLiveUserIcon:(id)arg1 withState:(long long)arg2;
- (void)setPeopleNum:(long long)arg1;
- (void)cancelCurrentImageLoad;
- (void)downloadAndHandleImage:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)showSelectedStyle:(_Bool)arg1;
- (void)setCityNameStatus:(id)arg1;
- (void)setMusicImageStatus:(id)arg1;
- (void)setSongName:(id)arg1;
- (void)resetFrame:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)fxConfigFullSelectedStyle;
- (void)installSelectedView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
