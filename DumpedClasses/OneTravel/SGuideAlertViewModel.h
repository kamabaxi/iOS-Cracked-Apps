//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SGuideItem;

@interface SGuideAlertViewModel : NSObject
{
    long long _imageType;
    NSString *_fileImg;
    NSString *_title;
    NSString *_msg;
    SGuideItem *_feeItem;
    SGuideItem *_etaItem;
    NSString *_cancelMsg;
    NSString *_confirmMsg;
}

@property(retain, nonatomic) NSString *confirmMsg; // @synthesize confirmMsg=_confirmMsg;
@property(retain, nonatomic) NSString *cancelMsg; // @synthesize cancelMsg=_cancelMsg;
@property(retain, nonatomic) SGuideItem *etaItem; // @synthesize etaItem=_etaItem;
@property(retain, nonatomic) SGuideItem *feeItem; // @synthesize feeItem=_feeItem;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *fileImg; // @synthesize fileImg=_fileImg;
@property(nonatomic) long long imageType; // @synthesize imageType=_imageType;
- (void).cxx_destruct;

@end

