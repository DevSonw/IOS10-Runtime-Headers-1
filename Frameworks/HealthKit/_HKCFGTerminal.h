//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKCFGExpression.h>

@interface _HKCFGTerminal : _HKCFGExpression
{
}

+ (id)terminalMatchingSequenceOfCharactersInSet:(id)arg1;
+ (id)terminalMatchingDoubleWithCondition:(CDUnknownBlockType)arg1;
+ (id)terminalMatchingAnyDouble;
+ (id)terminalMatchingIntegerWithCondition:(CDUnknownBlockType)arg1;
+ (id)terminalMatchingAnyInteger;
+ (id)terminalMatchingCharacterInString:(id)arg1;
+ (id)terminalMatchingCharacterInSet:(id)arg1;
+ (id)terminalMatchingString:(id)arg1;
+ (id)terminalMatchingString:(id)arg1 caseSensitive:(_Bool)arg2;
- (id)characterSet;
- (unsigned long long)_minimumLength;
- (id)_label;
- (_Bool)_scanValue:(id *)arg1 withScanner:(id)arg2;
- (void)_tryNodesWithContext:(id)arg1 solutionTest:(CDUnknownBlockType)arg2;

@end
