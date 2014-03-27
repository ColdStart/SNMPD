/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.17 $ of : mfd-data-access.m2c,v $
 *
 * $Id$
 */
#ifndef INETCIDRROUTETABLE_DATA_ACCESS_H
#define INETCIDRROUTETABLE_DATA_ACCESS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     *********************************************************************
     * function declarations
     */

    /*
     *********************************************************************
     * Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table inetCidrRouteTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * IP-FORWARD-MIB::inetCidrRouteTable is subid 7 of ipForward.
     * Its status is Current.
     * OID: .1.3.6.1.2.1.4.24.7, length: 9
     */


    int
        inetCidrRouteTable_init_data(inetCidrRouteTable_registration *
                                     inetCidrRouteTable_reg);


    /*
     * TODO:180:o: Review inetCidrRouteTable cache timeout.
     * The number of seconds before the cache times out
     */
#define INETCIDRROUTETABLE_CACHE_TIMEOUT   60

    void            inetCidrRouteTable_container_init(netsnmp_container
                                                      **container_ptr_ptr,
                                                      netsnmp_cache *
                                                      cache);
    void            inetCidrRouteTable_container_shutdown(netsnmp_container
                                                          *container_ptr);

    int             inetCidrRouteTable_container_load(netsnmp_container
                                                      *container);
    void            inetCidrRouteTable_container_free(netsnmp_container
                                                      *container);

    int             inetCidrRouteTable_cache_load(netsnmp_container
                                                  *container);
    void            inetCidrRouteTable_cache_free(netsnmp_container
                                                  *container);

    int
        inetCidrRouteTable_row_prep(inetCidrRouteTable_rowreq_ctx *
                                    rowreq_ctx);

    int
        inetCidrRouteTable_validate_index(inetCidrRouteTable_registration *
                                          inetCidrRouteTable_reg,
                                          inetCidrRouteTable_rowreq_ctx *
                                          rowreq_ctx);
    int             inetCidrRouteDestType_check_index(inetCidrRouteTable_rowreq_ctx * rowreq_ctx);      /* internal */
    int             inetCidrRouteDest_check_index(inetCidrRouteTable_rowreq_ctx * rowreq_ctx);  /* internal */
    int             inetCidrRoutePfxLen_check_index(inetCidrRouteTable_rowreq_ctx * rowreq_ctx);        /* internal */
    int             inetCidrRoutePolicy_check_index(inetCidrRouteTable_rowreq_ctx * rowreq_ctx);        /* internal */
    int             inetCidrRouteNextHopType_check_index(inetCidrRouteTable_rowreq_ctx * rowreq_ctx);   /* internal */
    int             inetCidrRouteNextHop_check_index(inetCidrRouteTable_rowreq_ctx * rowreq_ctx);       /* internal */


#ifdef __cplusplus
}
#endif
#endif                          /* INETCIDRROUTETABLE_DATA_ACCESS_H */
