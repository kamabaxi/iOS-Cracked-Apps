//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TFEUtil : NSObject
{
}

+ (_Bool)isValidateResponseStatusCode:(unsigned long long)arg1;
+ (_Bool)isValidateResponse:(id)arg1 responseDic:(id)arg2 useHttpDNS:(_Bool)arg3;
+ (void)response:(id)arg1 fromHttpResponse:(id)arg2;
+ (id)responseFromHttpResponse:(id)arg1;
+ (id)call:(SEL)arg1 withObject:(id)arg2 ofClass:(id)arg3;
+ (id)error:(id *)arg1 useError:(id)arg2;
+ (id)getHostFromUrl:(id)arg1;
+ (id)addTimerByInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 repeats:(_Bool)arg4 obj:(id)arg5;
+ (id)addTimerByInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 obj:(id)arg4;
+ (_Bool)isAllowedFileType:(id)arg1;
+ (void)asyncExecute:(CDUnknownBlockType)arg1;
+ (_Bool)isSessionExpiredByResponse:(id)arg1;
+ (id)device;

@end
