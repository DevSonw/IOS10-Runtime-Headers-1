//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMDocument, IKDOMElement, IKJSObject, NSDictionary;

@protocol IKJSMenuBarDocument <JSExport>
- (void)setSelectedItem:(IKJSObject *)arg1:(NSDictionary *)arg2;
- (IKDOMElement *)getSelectedItem;
- (void)setDocument:(IKDOMDocument *)arg1:(IKJSObject *)arg2:(NSDictionary *)arg3;
- (IKDOMDocument *)getDocument:(IKJSObject *)arg1;
@end
