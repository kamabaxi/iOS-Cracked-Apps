//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGShareInfoCollector.h"

@class KGShareHttpDao, KGSongShareDataProcessor, SongInfo;

@interface KGShareSongInfoCollector : KGShareInfoCollector
{
    KGShareHttpDao *_shareDao;
    SongInfo *_songInfo;
    KGSongShareDataProcessor *_songShareDataProcessor;
}

@property(retain, nonatomic) KGSongShareDataProcessor *songShareDataProcessor; // @synthesize songShareDataProcessor=_songShareDataProcessor;
@property(retain, nonatomic) SongInfo *songInfo; // @synthesize songInfo=_songInfo;
@property(retain, nonatomic) KGShareHttpDao *shareDao; // @synthesize shareDao=_shareDao;
- (void).cxx_destruct;
- (id)radioForYouShengAndMingRenExtraInfo:(id)arg1;
- (void)bulidShareOneSongOnCommonKind:(id)arg1 andPlayList:(id)arg2;
- (id)buildWeiXiSongPlayLinkParam;
- (id)buildShortLinkURLString:(id *)arg1;
- (id)buildShareCoverImage:(id *)arg1;
- (id)buildSubTitle;
- (id)buildTitle;
- (void)generateShareInfo:(id)arg1 withItem:(id)arg2;

@end
