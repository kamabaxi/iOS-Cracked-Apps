//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBLIEventProtocol.h"
#import "WVWebViewDelegate.h"

@class NSMutableArray, NSString;

@interface TBLIEventAdapter : NSObject <WVWebViewDelegate, TBLIEventProtocol>
{
    NSMutableArray *_webViewArray;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *webViewArray; // @synthesize webViewArray=_webViewArray;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)closeWebView:(id)arg1;
- (void)openWebView:(id)arg1 VC:(id)arg2 component:(id)arg3;
- (id)getCurrentSelectedViewController;
- (void)openurl:(id)arg1;
- (void)openUrl:(id)arg1;
- (void)removeWebView:(id)arg1;
- (void)saveWebView:(id)arg1;
- (void)clearAllWebView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
