//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DMSearchQueryInfo : NSObject
{
    unsigned long long _queryType;
    id _param;
}

+ (id)queryInfoWithParam:(id)arg1 type:(unsigned long long)arg2;
@property(readonly, nonatomic) id param; // @synthesize param=_param;
@property(readonly, nonatomic) unsigned long long queryType; // @synthesize queryType=_queryType;
- (void).cxx_destruct;
- (id)initWithParam:(id)arg1 type:(unsigned long long)arg2;

@end
