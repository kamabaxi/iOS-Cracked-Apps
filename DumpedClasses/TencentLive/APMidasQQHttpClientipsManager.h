//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface APMidasQQHttpClientipsManager : NSObject
{
    NSMutableDictionary *_ips;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *ips; // @synthesize ips=_ips;
- (void).cxx_destruct;
- (id)ipsOnlyForHost:(id)arg1;
- (id)ipsForHost:(id)arg1;

@end

