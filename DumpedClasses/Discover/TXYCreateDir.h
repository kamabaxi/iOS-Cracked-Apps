//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXYCommandTask.h"

@class NSString;

@interface TXYCreateDir : TXYCommandTask
{
    _Bool _overwrite;
    NSString *_attrs;
}

@property(readonly, nonatomic) NSString *attrs; // @synthesize attrs=_attrs;
@property(readonly, nonatomic) _Bool overwrite; // @synthesize overwrite=_overwrite;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1 bucket:(id)arg2 sign:(id)arg3 needOverWrite:(_Bool)arg4 customAttribute:(id)arg5;
- (id)initWithPath:(id)arg1;

@end
