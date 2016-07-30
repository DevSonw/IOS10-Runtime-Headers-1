//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPTextHostRep.h>

#import <iWorkImport/TSCHChartRepPlatformProtocols-Protocol.h>
#import <iWorkImport/TSCHSupportsRendering-Protocol.h>

@class CALayer, CAShapeLayer, NSArray, NSString, TSCHChartDrawableInfo, TSCHChartLayout, TSCHLegendMoveKnob, TSCHRendererLayer, TSCHSearchSelection, TSCHSelectionPath;

__attribute__((visibility("hidden")))
@interface TSCHChartRep : TSWPTextHostRep <TSCHChartRepPlatformProtocols, TSCHSupportsRendering>
{
    NSArray *mRenderers;
    _Bool mBuildingChunks;
    int mChunkPhase;
    long long mCurrentChunk;
    _Bool mBuildingFinalBackground;
    _Bool mBuildingFinalElements;
    _Bool mChunkTexturesValid;
    _Bool mInZoom;
    unsigned long long mInDynamicStandinOperation;
    unsigned long long mInDynamicStandinLayoutOperation;
    _Bool mIsKPFExportForMultiData;
    TSCHSelectionPath *mActiveTextEditingPath;
    TSCHRendererLayer *mLegendLayer;
    _Bool mForceSeparateLegendLayer;
    _Bool mIsLayerBasedRep;
    _Bool mInvalidateLegendLayerForLayerBasedRep;
    TSCHChartLayout *mChartLayout;
    _Bool mWantsPreviewLayout;
    _Bool mEditorIsEditingInfo;
    _Bool mMediatorEditingHaloLayerPathValid;
    CAShapeLayer *mMediatorEditingHaloLayer;
    _Bool mLegendBorderHaloLayerPathValid;
    CAShapeLayer *mLegendBorderHaloLayer;
    _Bool mChartRepGoingAway;
    _Bool mCDEIsEditingInfo;
    _Bool mCDECausedSetNeedsDisplay;
    _Bool mDrawingSearchReference;
    CALayer *mSubselectionKnobLayer;
    _Bool mFinishedBecomingSelected;
    TSCHLegendMoveKnob *mDynamicLegendKnob;
    _Bool mIs2DRepFor3DChartRep;
    CDUnknownBlockType mDrawingOpStartBlock;
    CDUnknownBlockType mDrawingOpEndBlock;
    int mRenderPassChunkPhase;
    struct CGPoint mLastSubselectionLayerRelativeReferencePosition;
    TSCHSearchSelection *_selection;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
@property(readonly, nonatomic) TSCHSearchSelection *selection; // @synthesize selection=_selection;
@property(readonly, nonatomic) _Bool is2DRepFor3DChartRep; // @synthesize is2DRepFor3DChartRep=mIs2DRepFor3DChartRep;
@property(copy, nonatomic) CDUnknownBlockType drawingOpEndBlock; // @synthesize drawingOpEndBlock=mDrawingOpEndBlock;
@property(copy, nonatomic) CDUnknownBlockType drawingOpStartBlock; // @synthesize drawingOpStartBlock=mDrawingOpStartBlock;
@property(readonly, nonatomic) long long currentChunk; // @synthesize currentChunk=mCurrentChunk;
@property(readonly, nonatomic) _Bool chartRepGoingAway; // @synthesize chartRepGoingAway=mChartRepGoingAway;
@property(readonly, retain, nonatomic) TSCHSelectionPath *activeTextEditingPath; // @synthesize activeTextEditingPath=mActiveTextEditingPath;
@property(nonatomic) _Bool chunkTexturesValid; // @synthesize chunkTexturesValid=mChunkTexturesValid;
@property(readonly, nonatomic) _Bool drawingSearchReference; // @synthesize drawingSearchReference=mDrawingSearchReference;
@property(retain, nonatomic) TSCHLegendMoveKnob *dynamicLegendKnob; // @synthesize dynamicLegendKnob=mDynamicLegendKnob;
@property(nonatomic) _Bool forceSeparateLegendLayer; // @synthesize forceSeparateLegendLayer=mForceSeparateLegendLayer;
- (void)endDrawingOperation;
- (void)beginDrawingOperation;
- (struct CGRect)convertUnscaledToBoundsRect:(struct CGRect)arg1;
- (struct CGRect)outerShadowFrame;
- (void)p_removeOrShowAndPositionMessageOverlay;
- (void)p_invalidateMessageOverlay;
- (id)p_textImageForPath:(struct CGPath *)arg1 renderer:(id)arg2 selection:(id)arg3 shouldPulsate:(_Bool)arg4;
- (_Bool)p_legendHitByLayoutPoint:(struct CGPoint)arg1;
- (_Bool)shadowsEnabled;
- (_Bool)buildShouldUseRenderer:(id)arg1;
- (_Bool)planeIsVisible:(int)arg1;
- (int)planeState:(int)arg1 finalElements:(_Bool)arg2 chunkStage:(long long)arg3;
- (int)planeState:(int)arg1 finalElements:(_Bool)arg2;
- (int)p_backgroundLikePlaneStateForEffectiveStage:(long long)arg1;
- (id)renderValueIndexSetForSeries:(unsigned long long)arg1 finalElements:(_Bool)arg2 currentChunk:(long long)arg3;
- (id)renderValueIndexSetForSeries:(unsigned long long)arg1 finalElements:(_Bool)arg2;
- (id)renderValueIndexSetForSeries:(unsigned long long)arg1;
- (id)renderSeriesIndexSetForFinalElements:(_Bool)arg1 currentChunk:(long long)arg2;
- (id)renderSeriesIndexSetForFinalElements:(_Bool)arg1;
- (id)renderSeriesIndexSet;
- (_Bool)renderTrendLinesForSeriesIndex:(unsigned long long)arg1;
- (_Bool)renderLabels;
- (_Bool)renderElementsShadowOnly;
- (_Bool)renderElementsWithoutShadows;
- (_Bool)renderReferenceLines;
- (_Bool)renderGrid;
- (_Bool)renderElements;
- (id)textureForContext:(id)arg1;
- (void)setTextureStage:(unsigned long long)arg1;
- (void)protected_renderChunkInBounds:(struct CGRect)arg1 textureSet:(id)arg2;
@property(readonly, nonatomic) unsigned long long chartDeliveryStyle;
@property(readonly, nonatomic) NSString *animationFilter;
- (void)editor:(id)arg1 isDeselectingInfos:(id)arg2;
- (void)editor:(id)arg1 isSelectingInfos:(id)arg2;
- (_Bool)isEditing;
- (void)didEndZooming;
- (void)willBeginZooming;
- (void)updateMessageOverlayNow;
- (_Bool)messageIsVisible;
- (void)dismissMessageOverlayNowWithAnimation:(_Bool)arg1;
- (void)p_topBarsShowedUp:(id)arg1;
- (void)displayMessage:(id)arg1 zPosition:(double)arg2 style:(int)arg3;
- (void)p_messageAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)p_forceDismissTransientMessage;
- (_Bool)p_chartShouldDisplayMessage;
- (void)p_positionMessageView;
- (struct CGRect)targetRectForEditMenu;
- (_Bool)shouldUseChartAreaRectForEditMenuTargetRectMinY;
- (void)p_deleteMessageView;
- (void)p_listenForDataChangesIfAppropriateForFill:(id)arg1 forProperty:(int)arg2;
- (void)p_checkFillPropertiesForDataListeningWithChangedProperties:(id)arg1;
- (void)renderIntoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (_Bool)inPrintPreviewMode;
- (struct CGPoint)scaledSubpixelOffsetFromLayerFrameInScaledCanvas;
- (struct CGRect)frameInUnscaledCanvas;
- (_Bool)frameInUnscaledCanvasNeedsPaddingForShadows;
- (_Bool)p_hasBackgroundLayerForPieChart;
- (_Bool)p_hasBackgroundFill;
- (_Bool)isDrawingIntoPDF;
@property(readonly, nonatomic) double contentsScale;
@property(readonly, nonatomic) double viewScale;
- (struct CGRect)geometryFrame;
- (id)geometry;
- (void)updateFromLayout;
- (_Bool)shouldUseRenderer:(id)arg1;
- (void)clearRenderers;
- (id)renderers;
@property(readonly, nonatomic) _Bool isCorrectRepClassForInfo;
- (_Bool)canDrawInParallel;
@property(readonly, nonatomic) _Bool forceRenderBlankBackground;
- (id)p_legendRenderer;
- (_Bool)isLayerBasedRep;
@property(readonly, nonatomic) TSCHChartLayout *chartLayout;
- (id)drawableLayout;
@property(readonly, nonatomic) TSCHChartDrawableInfo *chartInfo;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2 is2DRepFor3DChartRep:(_Bool)arg3;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (_Bool)requireSeparateLabelLayer;
- (id)referenceLineLabelsSearchSelectionsToRender;
- (id)referenceLinesToRender;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
