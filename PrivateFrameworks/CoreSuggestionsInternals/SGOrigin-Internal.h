//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestions/SGOrigin.h>

@interface SGOrigin (Internal)
+ (id)originForDuplicateKey:(id)arg1 sourceKey:(id)arg2 store:(id)arg3;
+ (unsigned long long)originTypeForEntityType:(long long)arg1;
- (void)addSnippetIfNotExistsFromContentOfEntity:(id)arg1;
- (void)addDetailsFromOriginatingInteractionEntity:(id)arg1 store:(id)arg2;
- (void)addDetailsFromOriginatingCalendarEntity:(id)arg1 store:(id)arg2;
- (void)addDetailsFromOriginatingContactEntity:(id)arg1 store:(id)arg2;
- (void)addDetailsFromOriginatingMessageEntity:(id)arg1 store:(id)arg2;
- (void)addDetailsFromParticipantsOfEntity:(id)arg1;
- (void)addDetailsFromOriginatingGenericEntity:(id)arg1;
@end

