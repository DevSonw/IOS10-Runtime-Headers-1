//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSTCellStyle, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSTLocalStylesKey : NSObject <NSCopying>
{
    TSTCellStyle *mCellStyle;
    TSWPParagraphStyle *mTextStyle;
}

@property(retain) TSWPParagraphStyle *textStyle; // @synthesize textStyle=mTextStyle;
@property(retain) TSTCellStyle *cellStyle; // @synthesize cellStyle=mCellStyle;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
