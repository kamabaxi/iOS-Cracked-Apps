//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSURL, NSURLConnection;

@interface SDWebImageDownloader : NSObject
{
    NSURL *url;
    id <SDWebImageDownloaderDelegate> delegate;
    NSURLConnection *connection;
    NSMutableData *imageData;
    id userInfo;
    _Bool lowPriority;
    unsigned long long expectedSize;
    _Bool progressive;
    unsigned long long width;
    unsigned long long height;
}

+ (id)downloaderWithURL:(id)arg1 delegate:(id)arg2 userInfo:(id)arg3 lowPriority:(_Bool)arg4;
+ (id)downloaderWithURL:(id)arg1 delegate:(id)arg2 userInfo:(id)arg3;
+ (id)downloaderWithURL:(id)arg1 delegate:(id)arg2;
@property(nonatomic) _Bool progressive; // @synthesize progressive;
@property(nonatomic) _Bool lowPriority; // @synthesize lowPriority;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo;
@property(retain, nonatomic) NSMutableData *imageData; // @synthesize imageData;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection;
@property(nonatomic) id <SDWebImageDownloaderDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSURL *url; // @synthesize url;
- (void).cxx_destruct;
- (void)dealloc;
- (void)imageDecoder:(id)arg1 didFinishDecodingImage:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancel;
- (void)start;

@end

