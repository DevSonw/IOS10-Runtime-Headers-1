//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

@interface INStringResolutionResult : INIntentResolutionResult
{
}

+ (id)unsupportedWithReason:(long long)arg1 alternativeStrings:(id)arg2;
+ (id)confirmationRequiredWithStringToConfirm:(id)arg1;
+ (id)disambiguationWithStringsToDisambiguate:(id)arg1;
+ (id)successWithResolvedString:(id)arg1;

@end
