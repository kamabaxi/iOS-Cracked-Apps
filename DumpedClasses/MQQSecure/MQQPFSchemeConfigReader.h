//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MQQPFScheme, NSMutableArray;

@interface MQQPFSchemeConfigReader : NSObject
{
    _Bool _hasDownloadTask;
    NSMutableArray *_schemes;
    MQQPFScheme *_currentScheme;
}

@property(nonatomic) _Bool hasDownloadTask; // @synthesize hasDownloadTask=_hasDownloadTask;
@property(retain, nonatomic) MQQPFScheme *currentScheme; // @synthesize currentScheme=_currentScheme;
@property(retain, nonatomic) NSMutableArray *schemes; // @synthesize schemes=_schemes;
- (struct UIEdgeInsets)readInsetsFromValue:(id)arg1;
- (struct CGSize)readUISizeFromValue:(id)arg1;
- (double)readUIFloatFromValue:(id)arg1;
- (id)currentScreenInchString;
- (id)readSimilaryFromValue:(id)arg1;
- (id)readSortDescriptorFromValue:(id)arg1;
- (id)readStringArrayFromValue:(id)arg1;
- (id)readSizeArrayFromValue:(id)arg1;
- (void)readWithKey:(id)arg1 value:(id)arg2;
- (void)readWithKey:(id)arg1 dict:(id)arg2;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1;

@end
