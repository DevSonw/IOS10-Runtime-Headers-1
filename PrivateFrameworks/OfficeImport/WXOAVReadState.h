//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OAVReadState.h>

@class NSMutableDictionary, WDParagraph, WXReadState;

__attribute__((visibility("hidden")))
@interface WXOAVReadState : OAVReadState
{
    WXReadState *mWxState;
    WDParagraph *mParagraph;
    NSMutableDictionary *mNextVmlShapeIdToTextBoxMap;
}

- (id)nextVmlShapeIdToTextBoxMap;
- (void)setCurrentParagraph:(id)arg1;
- (id)currentParagraph;
- (id)wxReadState;
- (void)dealloc;
- (id)initWithWXReadState:(id)arg1;

@end

