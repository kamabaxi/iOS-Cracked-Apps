//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface SPickBymeterComModel : JSONModel
{
    _Bool _enable;
    NSString *_productLine;
    NSString *_title;
    CDUnknownBlockType _clickCallback;
}

@property(copy, nonatomic) CDUnknownBlockType clickCallback; // @synthesize clickCallback=_clickCallback;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic, getter=isEnable) _Bool enable; // @synthesize enable=_enable;
@property(copy, nonatomic) NSString *productLine; // @synthesize productLine=_productLine;
- (void).cxx_destruct;
- (id)init;

@end
