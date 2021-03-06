//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKChatControllerDelegate-Protocol.h>
#import <ChatKit/NSObject-Protocol.h>

@class CKComposeChatController, CKComposition, CKConversation;

@protocol CKComposeChatControllerDelegate <NSObject, CKChatControllerDelegate>
- (void)composeChatController:(CKComposeChatController *)arg1 didSelectNewConversation:(CKConversation *)arg2;
- (void)composeChatControllerDidCancelComposition:(CKComposeChatController *)arg1;
- (_Bool)composeChatControllerCanEditRecipients;

@optional
- (void)composeChatController:(CKComposeChatController *)arg1 shouldSendComposition:(CKComposition *)arg2 inConversation:(CKConversation *)arg3 completion:(void (^)(_Bool))arg4;
@end

