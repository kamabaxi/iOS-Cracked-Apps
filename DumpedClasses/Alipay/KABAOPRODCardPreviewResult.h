//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KABAOPRODKabaoCommonResult.h"

@class NSArray, NSString;

@interface KABAOPRODCardPreviewResult : KABAOPRODKabaoCommonResult
{
    _Bool _isShowFollow;
    NSArray *_cardPreviewList;
    NSString *_officialAccountName;
    NSString *_officialAccountId;
}

+ (Class)cardPreviewListElementClass;
@property(retain, nonatomic) NSString *officialAccountId; // @synthesize officialAccountId=_officialAccountId;
@property(retain, nonatomic) NSString *officialAccountName; // @synthesize officialAccountName=_officialAccountName;
@property(nonatomic) _Bool isShowFollow; // @synthesize isShowFollow=_isShowFollow;
@property(retain, nonatomic) NSArray *cardPreviewList; // @synthesize cardPreviewList=_cardPreviewList;
- (void).cxx_destruct;

@end
