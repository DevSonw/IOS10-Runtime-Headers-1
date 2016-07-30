//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKBKeyView.h>

#import <UIKit/UIKeyboardEmojiCategoryUpdate-Protocol.h>

@class NSString, UIKeyboardEmojiKeyDisplayController;
@protocol UIKeyboardEmojiCategoryUpdateDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiKeyView : UIKBKeyView <UIKeyboardEmojiCategoryUpdate>
{
    UIKeyboardEmojiKeyDisplayController<UIKeyboardEmojiCategoryUpdateDelegate> *emojiKeyManager;
}

@property(nonatomic) UIKeyboardEmojiKeyDisplayController<UIKeyboardEmojiCategoryUpdateDelegate> *emojiKeyManager; // @synthesize emojiKeyManager;
- (long long)updateToCategoryWithOffsetPercentage:(double)arg1;
- (void)updateToCategory:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
