//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextToSpeech/NSObject-Protocol.h>

@class NSObject, NSSet, NSString, TTSSpeechRequest;
@protocol OS_dispatch_queue;

@protocol TTSSpeechService <NSObject>
@property(nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
- (NSString *)speechMarkupStringForType:(long long)arg1;
- (NSSet *)supportedIPAPhonemeLanguages;
- (oneway void)getSpeechIsActiveForRequest:(TTSSpeechRequest *)arg1 reply:(void (^)(_Bool))arg2;
- (oneway void)getSpeechIsActiveReply:(void (^)(_Bool))arg1;
- (oneway void)getVoicesForLanguage:(NSString *)arg1 reply:(void (^)(NSArray *))arg2;
- (oneway void)stopSpeechRequest:(TTSSpeechRequest *)arg1 atMark:(long long)arg2;
- (oneway void)continueSpeechRequest:(TTSSpeechRequest *)arg1;
- (oneway void)pauseSpeechRequest:(TTSSpeechRequest *)arg1 atMark:(long long)arg2;
- (oneway void)startSpeechRequest:(TTSSpeechRequest *)arg1;

@optional
- (void)nashvilleVoiceIdentifier:(NSString *)arg1 footprint:(long long)arg2 voiceType:(long long)arg3 gender:(long long)arg4 voiceId:(id *)arg5 voiceName:(id *)arg6;
- (NSString *)enclosedStringWithPhonemes:(NSString *)arg1;
- (NSString *)phonemesFromLHPhonemes:(NSString *)arg1 language:(NSString *)arg2;
- (NSString *)phonemesFromIPA:(NSString *)arg1 language:(NSString *)arg2;
- (NSString *)lhPhonemesFromIPA:(NSString *)arg1 language:(NSString *)arg2;
@end
