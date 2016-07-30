//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DTransformGeometryRenderProcessor.h>

__attribute__((visibility("hidden")))
@interface TSCH3DPlaneProjectRenderProcessor : TSCH3DTransformGeometryRenderProcessor
{
    plane_849e6053 mPlane;
    tvec3_17f03ce0 mProjPt;
    box_a3bd9649 mBounds;
}

+ (id)processorWithPlane:(const plane_849e6053 *)arg1 projPt:(const tvec3_17f03ce0 *)arg2;
@property(readonly, nonatomic) const box_a3bd9649 *bounds; // @synthesize bounds=mBounds;
- (id).cxx_construct;
- (void)submit:(const struct PrimitiveInfo *)arg1;
- (id)initWithPlane:(const plane_849e6053 *)arg1 projPt:(const tvec3_17f03ce0 *)arg2;

@end
