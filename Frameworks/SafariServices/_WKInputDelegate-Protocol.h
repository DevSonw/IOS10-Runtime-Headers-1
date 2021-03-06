//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSObject, NSString, UITextSuggestion, WKWebView;
@protocol NSSecureCoding, _WKFocusedElementInfo, _WKFormInputSession;

@protocol _WKInputDelegate <NSObject>

@optional
- (void)_webView:(WKWebView *)arg1 insertTextSuggestion:(UITextSuggestion *)arg2 inInputSession:(id <_WKFormInputSession>)arg3;
- (NSArray *)_webView:(WKWebView *)arg1 suggestionsForString:(NSString *)arg2 inInputSession:(id <_WKFormInputSession>)arg3;
- (_Bool)_webView:(WKWebView *)arg1 hasSuggestionsForCurrentStringInInputSession:(id <_WKFormInputSession>)arg2;
- (void)_webView:(WKWebView *)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id <_WKFormInputSession>)arg2;
- (_Bool)_webView:(WKWebView *)arg1 focusShouldStartInputSession:(id <_WKFocusedElementInfo>)arg2;
- (void)_webView:(WKWebView *)arg1 willSubmitFormValues:(NSDictionary *)arg2 userObject:(NSObject<NSSecureCoding> *)arg3 submissionHandler:(void (^)(void))arg4;
- (void)_webView:(WKWebView *)arg1 didStartInputSession:(id <_WKFormInputSession>)arg2;
@end

