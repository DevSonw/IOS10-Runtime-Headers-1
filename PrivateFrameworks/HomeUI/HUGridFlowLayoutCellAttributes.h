//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@class HFWallpaper;

@interface HUGridFlowLayoutCellAttributes : UICollectionViewLayoutAttributes
{
    HFWallpaper *_blurredWallpaper;
    struct CGRect _normalizedWallpaperRect;
}

@property(retain, nonatomic) HFWallpaper *blurredWallpaper; // @synthesize blurredWallpaper=_blurredWallpaper;
@property(nonatomic) struct CGRect normalizedWallpaperRect; // @synthesize normalizedWallpaperRect=_normalizedWallpaperRect;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
