//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SFDevice, TRAnisetteDataHandler;

@interface TRAbstractCommunicationSession : NSObject
{
    SFDevice *_peerDevice;
    NSMutableDictionary *_messageClassToHandlerMap;
    TRAnisetteDataHandler *_anisetteDataHandler;
}

@property(retain, nonatomic) TRAnisetteDataHandler *anisetteDataHandler; // @synthesize anisetteDataHandler=_anisetteDataHandler;
@property(retain, nonatomic) NSMutableDictionary *messageClassToHandlerMap; // @synthesize messageClassToHandlerMap=_messageClassToHandlerMap;
@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
- (void).cxx_destruct;
- (id)messenger;
- (void)handleRequestMessage:(id)arg1;
- (void)handleEventMessage:(id)arg1;
- (void)_invokeHandlerForMessage:(id)arg1;
- (void)sendMessage:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)sendEventData:(id)arg1;
- (void)sendRequestData:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)messageClass:(Class)arg1 addHandler:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (id)init;

@end

