//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/GQDPath.h>

__attribute__((visibility("hidden")))
@interface GQDScalarPath : GQDPath
{
    int mType;
    double mScalar;
    struct CGSize mSize;
}

- (struct CGPath *)createBezierPath;
- (struct CGSize)size;
- (int)type;
- (double)scalar;
- (_Bool)isRect;
- (_Bool)isRectangular;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;

@end

