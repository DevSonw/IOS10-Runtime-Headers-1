//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

@class INPerson, NSString;

@interface INShowPersonInteractionsIntent : INIntent
{
    INPerson *_person;
    NSString *_focusItemIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *focusItemIdentifier; // @synthesize focusItemIdentifier=_focusItemIdentifier;
@property(copy, nonatomic) INPerson *person; // @synthesize person=_person;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPerson:(id)arg1 focusItemIdentifier:(id)arg2;

@end

