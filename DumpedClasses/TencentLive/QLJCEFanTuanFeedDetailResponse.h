//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEONAFanTuanFeed, QLJCEShareItem;

@interface QLJCEFanTuanFeedDetailResponse : JceObjectV2
{
    _Bool jcev2_p_3_o_hasNextPage;
    int jcev2_p_0_r_errCode;
    int jcev2_p_7_o_ftFlags;
    NSArray *jcev2_p_1_o_fanTuanFeedCommentList__b0x9i_VOQLJCEFanTuanCommentItem;
    NSString *jcev2_p_2_o_pageContext;
    QLJCEONAFanTuanFeed *jcev2_p_4_o_primaryFeed;
    NSString *jcev2_p_5_o_shareH5Url;
    QLJCEShareItem *jcev2_p_6_o_shareItem;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_ftFlags, setter=setJce_ftFlags:) int jcev2_p_7_o_ftFlags; // @synthesize jcev2_p_7_o_ftFlags;
@property(retain, nonatomic, getter=jce_shareItem, setter=setJce_shareItem:) QLJCEShareItem *jcev2_p_6_o_shareItem; // @synthesize jcev2_p_6_o_shareItem;
@property(retain, nonatomic, getter=jce_shareH5Url, setter=setJce_shareH5Url:) NSString *jcev2_p_5_o_shareH5Url; // @synthesize jcev2_p_5_o_shareH5Url;
@property(retain, nonatomic, getter=jce_primaryFeed, setter=setJce_primaryFeed:) QLJCEONAFanTuanFeed *jcev2_p_4_o_primaryFeed; // @synthesize jcev2_p_4_o_primaryFeed;
@property(nonatomic, getter=jce_hasNextPage, setter=setJce_hasNextPage:) _Bool jcev2_p_3_o_hasNextPage; // @synthesize jcev2_p_3_o_hasNextPage;
@property(retain, nonatomic, getter=jce_pageContext, setter=setJce_pageContext:) NSString *jcev2_p_2_o_pageContext; // @synthesize jcev2_p_2_o_pageContext;
@property(retain, nonatomic, getter=jce_fanTuanFeedCommentList, setter=setJce_fanTuanFeedCommentList:) NSArray *jcev2_p_1_o_fanTuanFeedCommentList__b0x9i_VOQLJCEFanTuanCommentItem; // @synthesize jcev2_p_1_o_fanTuanFeedCommentList__b0x9i_VOQLJCEFanTuanCommentItem;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end
