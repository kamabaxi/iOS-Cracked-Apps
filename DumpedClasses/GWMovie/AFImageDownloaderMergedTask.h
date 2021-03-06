//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSURLSessionDataTask, NSUUID;

@interface AFImageDownloaderMergedTask : NSObject
{
    NSString *_URLIdentifier;
    NSUUID *_identifier;
    NSURLSessionDataTask *_task;
    NSMutableArray *_responseHandlers;
}

@property(retain, nonatomic) NSMutableArray *responseHandlers; // @synthesize responseHandlers=_responseHandlers;
@property(retain, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *URLIdentifier; // @synthesize URLIdentifier=_URLIdentifier;
- (void).cxx_destruct;
- (void)removeResponseHandler:(id)arg1;
- (void)addResponseHandler:(id)arg1;
- (id)initWithURLIdentifier:(id)arg1 identifier:(id)arg2 task:(id)arg3;

@end

